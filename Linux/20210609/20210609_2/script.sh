#!/bin/bash

if [ -z $1 ]
then
    echo No arguments of command line
    read VAR
else
    VAR=$1
fi
echo the following filename has been provided: $VAR