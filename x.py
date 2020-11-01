import subprocess, os
import sys

def py():
    python = ''
    for i in ['python','python3']:
        if int(subprocess.getoutput(i+' -V').strip('Python ').replace('.','')[0])>2:
            python = i
            break
    return python

subprocess.call(py()+' -m pip install virtualenv',shell=True)
