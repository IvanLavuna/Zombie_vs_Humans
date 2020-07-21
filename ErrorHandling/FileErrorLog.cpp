//
// Created by ivan on 11.06.20.
//
#include "pch.h"
#include "FileErrorLog.h"

/// constructors/destructor
FileErrorLog::~FileErrorLog()
{

}

/// functions
void FileErrorLog::openLog(std::string fileName)
{
	this->file.open(fileName,std::ios::app);
}

void FileErrorLog::closeLog()
{
	this->file.close();
}

void FileErrorLog::writeError(std::string errorMessage)
{
	this->file << errorMessage <<"\n";
}
