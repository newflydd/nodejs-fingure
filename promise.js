var Q  = require('q');
var fs = require('fs');

function fs_readFile (file, encoding) {
  var deferred = Q.defer()
  fs.readFile(file, encoding, function (err, data) {
    if (err)
        deferred.reject(err);          // rejects the promise with `er` as the reason
    else
        deferred.resolve(data);        // fulfills the promise with `data` as the value
  })
  return deferred.promise;              // the promise is returned
}
fs_readFile('myfile.txt').then(data =>{
    console.log(data.toString('UTF-8'));
}).catch(err => console.error('读取错误：\n' + err));