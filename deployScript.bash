#!/bin/bash
valid=0
invalid=0
for file in ./test/good/*
do 
    ./bin/tpcas < "$file"
    result=$?

    if [ $result -eq 0 ]
    then 
        let valid=valid+1
    fi
done

for file in ./test/syn-err/*
do 
    ./bin/tpcas < "$file"
    result=$?

    if [ $result -eq 1 ]
    then 
        let invalid=invalid+1
    fi
done

echo "Total valid tests: $valid"
echo "Total invalid tests: $invalid"