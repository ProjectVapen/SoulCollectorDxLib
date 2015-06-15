#include "AppData.h"


AppData::AppData()
{
	m_upData = true;
}


AppData::~AppData()
{
}


bool AppData::AppUpDataFlg(){
	return m_upData;
}

void AppData::IsUpData(bool upData){
	m_upData = upData;
}