#pragma once
#include <mutex>
class InitSocket {
//private:
//	InitSocket();
	//InitSocket(const InitSocket&) = delete;
	//InitSocket& InitSocket::operator=(const InitSocket&) = delete;
	////���� //����ʽ
	//static InitSocket* pInstance;
	//static std::mutex mt;
public:
	//static InitSocket* instance();
	//static void destroyInstance();
	InitSocket();
	~InitSocket();
};