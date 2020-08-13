#!/usr/bin/env bash 

cd $1
gcc main.c -o main -lm
echo "Compilação de main.c em " $1/"main.c terminou!"