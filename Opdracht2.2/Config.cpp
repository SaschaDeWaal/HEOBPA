#include "stdafx.h"
#include "Config.h"



Config::Config(const string & name){

}

void Config::put(const string & key, const string & value){
	this->keys.push_back(key);
	this->values.push_back(value);
}

string & Config::operator[](const string & key){
	for (int i = 0; i < keys.size(); i++) {
		if (key == keys[i]) {
			return values[i];
		}
	}

	return NOKEY;
}

ostream & operator<<(ostream & os, const Config & config){
	string json = "{";

	for (int i = 0; i < config.keys.size(); i++) {
		json += "\"" + config.keys[i] + "\" : \"" + config.values[i] + "\"";
		if (i < config.keys.size() - 1) json += ", ";
	}
	
	json += "}";
	return os << json;
}
