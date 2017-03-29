import QtQuick 2.0

ListModel {

    function removeFid(fid){
        for(var i = 0; i < count; i++){
            if(get(i).fid === fid){
                remove(i);
                break;
            }
        }
    }
}
