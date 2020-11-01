def py():
  python = ' '
     for i0 in ['python','python3']:
        if int(subprocess.getoutput(i+' -V').split('Python ')[1].split('.')[0])>2:
          python = i
          break
     return python
