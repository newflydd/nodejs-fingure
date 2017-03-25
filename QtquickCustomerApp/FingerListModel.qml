import QtQuick 2.0

ListModel {
    ListElement{
        name : "王磊"
        power : 1
        fid : "008"
    }

    ListElement{
        name : "丁丁"
        power : 2
        fid : "106"
    }

    ListElement{
        name : "刘春"
        power : 6
        fid : "512"
    }
    ListElement{
        name : "钱程丽"
        power : 3
        fid : "201"
    }

    ListElement{
        name : "王祥"
        power : 3
        fid : "201"
    }
    ListElement{
        name : "张晓波"
        power : 3
        fid : "202"
    }
    ListElement{
        name : "蒋健"
        power : 3
        fid : "203"
    }
    ListElement{
        name : "顾建勇"
        power : 3
        fid : "204"
    }
    ListElement{
        name : "陈娟"
        power : 1
        fid : "009"
    }
    ListElement{
        name : "许强"
        power : 3
        fid : "205"
    }
    ListElement{
        name : "刘静"
        power : 3
        fid : "206"
    }
    ListElement{
        name : "陶慧"
        power : 4
        fid : "300"
    }

    function removeFid(fid){
        for(var i = 0; i < count; i++){
            if(get(i).fid === fid){
                remove(i);
                break;
            }
        }
    }
}
