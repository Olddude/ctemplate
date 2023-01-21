const process = require('process');
const path = require('path');
const fs = require('fs');

const csvFilePath = path.resolve(process.cwd(), 'data.csv');

fs.open(csvFilePath, 'r', (err, fd) => {
    if (err) {
        console.error(err);
    } else {
        console.log(fd);
    }
});
