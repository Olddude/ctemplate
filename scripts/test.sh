#!/usr/bin/env sh
echo "running tests for ctemplate"

echo "running filesys tests"
./bin/tests/filesys-tests
echo $?

echo "running http tests"
./bin/tests/http-tests
echo $?

echo "running list tests"
./bin/tests/list-tests
echo $?

echo "running validator tests"
./bin/tests/validator-tests ./assets/data.csv 8 8
echo $?
