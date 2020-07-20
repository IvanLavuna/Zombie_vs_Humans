//
// Created by ivan on 11.06.20.
//

#ifndef BALLS_FILEERRORLOG_H
#define BALLS_FILEERRORLOG_H

#include "IErrorLog.h"

class FileErrorLog : public IErrorLog
{
private:
	std::ofstream file;

public:
	/// constructors/destructor
	~FileErrorLog() override;

	/// functions
	void openLog(std::string fileName) override;
	void closeLog() override ;
	void writeError(std::string errorMessage) override;
};


#endif //BALLS_FILEERRORLOG_H
