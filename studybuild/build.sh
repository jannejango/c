#!/bin/bash

# complie
gcc -c hello.c bye.c main.c

# create static library
ar r libgreet.a hello.o bye.o

# create a.out from library
# bye()関数はmain()関数で利用しないので、リンクされない。
gcc main.o libgreet.a

# show symbols
#  U: Undefined
#  T: defined in Text(code) section
#  b: uninitialized data section
#  d: initialized Data section
#  r: Read only data section 
echo '$ nm main.o'
nm main.o
echo '$ nm libgreet.a'
nm libgreet.a
echo '$ nm a.out'
nm a.out
