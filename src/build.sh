#!/bin/env bash

set -xe

CC=gcc

mkdir -p build
mkdir -p page/topic/ciencia_computacao
mkdir -p page/topic/conceitos_programacao
mkdir -p page/topic/especifico
mkdir -p page/topic/primeiro_programa
mkdir -p page/topic/programa_simples
mkdir -p page/topic/exemplos

$CC src/index.c -o build/index.o &
$CC src/topic_ciencia_computacao.c -o build/topic_ciencia_computacao.o &
$CC src/topic_conceitos_programacao.c -o build/topic_conceitos_programacao.o &
$CC src/topic_especifico.c -o build/topic_especifico.o &
$CC src/topic_primeiro_programa.c -o build/topic_primeiro_programa.o &
$CC src/topic_programa_simples.c -o build/topic_programa_simples.o &
$CC src/topic_exemplos.c -o build/topic_exemplos.o &

wait

cd page
../build/index.o

cd topic/ciencia_computacao
../../../build/topic_ciencia_computacao.o
cd ..

cd conceitos_programacao
../../../build/topic_conceitos_programacao.o
cd ..

cd especifico
../../../build/topic_especifico.o
cd ..

cd primeiro_programa
../../../build/topic_primeiro_programa.o
cd ..

cd programa_simples
../../../build/topic_programa_simples.o
cd ..

cd exemplos
../../../build/topic_exemplos.o
cd ..
