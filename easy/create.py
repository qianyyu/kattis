import os

name = input("Enter the problem ID: ")
os.system('mkdir '+name)
os.system('cd '+name)
os.system('touch '+name+'/hello.cpp')
os.system('cat hello.cpp > '+name+'/hello.cpp')
os.system('touch '+name+'/makefile')
os.system('cat makefile > '+name+'/makefile')
input("Make sure that you have downloaded the data files...")
os.system('mv ~/Downloads/'+name+'.zip '+name+'/' )
os.system('unzip '+name+'/'+name+'.zip -d ./'+name)
