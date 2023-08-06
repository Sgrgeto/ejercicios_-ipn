#!/usr/bin/env python3

import os,reports,subprocess,datetime, emails

descriptions = subprocess.run(["ls", "supplier-data/descriptions"], capture_output=True)
descriptions = descriptions.stdout.decode().split('\n')
info=[]
for file in descriptions:
        file = subprocess.run(["cat", "supplier-data/descriptions/"+file], capture_output=True)
        info.append(file)
info.pop()
def report_file(line):
        try:
                line = line.stdout.decode().split('\n')
                return f'name:{line[0]}<br/>weight:{line[1]}<br/><br/>'
        except IndexError:
                pass
def body_report():
        string = ""
        for line in info:
                if line == None:
                        pass
                else:
                        string += report_file(line)
        return string


def main():
        paragraph = body_report()
        today = datetime.datetime.today()
        title = "Processed Update on {} {}, {}".format(
        today.strftime("%B"), today.day, today.year
        )
        pdf_file= '/tmp/processed.pdf'
        reports.generate(pdf_file, title, paragraph)
if __name__ == '__main__':
        main()
        sender ='automation@example.com'
        receiver="{}@example.com".format(os.environ.get("USER"))
        subject= "Upload Completed - Online Fruit Store"
        body = "All fruits are uploaded to our website successfully. A detailed list is attached to this email."
        attachment = '/tmp/processed.pdf'
        message = emails.generate_email(sender,receiver, subject,body,attachment)
        emails.send_email(message)
