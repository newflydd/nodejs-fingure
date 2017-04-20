import QtQuick 2.0

ListModel {
//    ListElement {
//        fid: "1"
//        power: "1"
//        name: "test"
//    }
    function removeFid(fid){
        for(var i = 0; i < count; i++){
            if(get(i).fid === fid){
                remove(i);
                break;
            }
        }
    }
}
