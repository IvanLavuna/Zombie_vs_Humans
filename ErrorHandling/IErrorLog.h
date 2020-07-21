//
// Created by ivan on 11.06.20.
//

#ifndef BALLS_IERRORLOG_H
#define BALLS_IERRORLOG_H

class IErrorLog
{
public:
	virtual ~IErrorLog() = default;

	virtual void openLog(std::string fileName) = 0;
	virtual void closeLog() = 0;
	virtual void writeError(std::string errorMessage) = 0;
};


#endif //BALLS_IERRORLOG_H
