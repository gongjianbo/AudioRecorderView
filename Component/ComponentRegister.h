#ifndef COMPONENTREGISTER_H
#define COMPONENTREGISTER_H

#include <QQmlEngine>
#include <QQmlContext>

#include "AudioRecorderView.h"

class ComponentRegister
{
public:
    static void registerType(QQmlContext *)
    {
        //录音组件
        qmlRegisterType<AudioRecorder>("GongJianBo",1,0,"AudioRecorder");
        qmlRegisterType<AudioRecorderView>("GongJianBo",1,0,"AudioRecorderView");
        qmlRegisterUncreatableType<AudioRecorderDevice>("GongJianBo",1,0,"AudioRecorderDevice",
                                                       "can not instantiate AudioRecorderDevice in qml");
        //qmlRegisterUncreatableType<AudioRecorderInput>("GongJianBo",1,0,"AudioRecorderInput",
        //"can not instantiate AudioRecorderInput in qml");
        //qmlRegisterUncreatableType<AudioRecorderOutput>("GongJianBo",1,0,"AudioRecorderOutput",
        //"can not instantiate AudioRecorderOutput in qml");
    }
};

#endif // COMPONENTREGISTER_H
