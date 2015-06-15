#include "AppData.h"


AppData::AppData()
{
	m_upData = true;
}


AppData::~AppData()
{
}


bool AppData::CanUpData(){
	return m_upData;
}

void AppData::IsStopUpData(bool upData){
	m_upData = upData;
}