#ifndef TELLDUSCOREOBJECT_H
#define TELLDUSCOREOBJECT_H

#include <QObject>

class TelldusCoreObject : public QObject
{
	Q_OBJECT
public:
	TelldusCoreObject( QObject * parent = 0 );
	virtual ~TelldusCoreObject();
	
signals:
	void deviceChange( int deviceId, int eventId );
	void errorOccurred( int deviceId, int errorId, const QString &errorString );

public slots:
	int bell( int deviceId );
	int dim( int deviceId, char level );
	QString getName( int deviceId ) const;
	int getNumberOfDevices() const;
	int getDeviceId( int index ) const;
	int methods( int deviceId, int methodsSupported );
	
	int turnOn( int deviceId );
	int turnOff( int deviceId );
	
private:
	void triggerError( int, int );
};

#endif // TELLDUSCOREOBJECT_H