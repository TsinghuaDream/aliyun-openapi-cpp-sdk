/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/dataworks-public/model/UpdateFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateFileRequest;

UpdateFileRequest::UpdateFileRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateFile")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateFileRequest::~UpdateFileRequest()
{}

std::string UpdateFileRequest::getOutputList()const
{
	return outputList_;
}

void UpdateFileRequest::setOutputList(const std::string& outputList)
{
	outputList_ = outputList;
	setBodyParameter("OutputList", outputList);
}

std::string UpdateFileRequest::getDependentNodeIdList()const
{
	return dependentNodeIdList_;
}

void UpdateFileRequest::setDependentNodeIdList(const std::string& dependentNodeIdList)
{
	dependentNodeIdList_ = dependentNodeIdList;
	setBodyParameter("DependentNodeIdList", dependentNodeIdList);
}

std::string UpdateFileRequest::getContent()const
{
	return content_;
}

void UpdateFileRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string UpdateFileRequest::getProjectIdentifier()const
{
	return projectIdentifier_;
}

void UpdateFileRequest::setProjectIdentifier(const std::string& projectIdentifier)
{
	projectIdentifier_ = projectIdentifier;
	setBodyParameter("ProjectIdentifier", projectIdentifier);
}

long UpdateFileRequest::getProjectId()const
{
	return projectId_;
}

void UpdateFileRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

long UpdateFileRequest::getStartEffectDate()const
{
	return startEffectDate_;
}

void UpdateFileRequest::setStartEffectDate(long startEffectDate)
{
	startEffectDate_ = startEffectDate;
	setBodyParameter("StartEffectDate", std::to_string(startEffectDate));
}

std::string UpdateFileRequest::getCycleType()const
{
	return cycleType_;
}

void UpdateFileRequest::setCycleType(const std::string& cycleType)
{
	cycleType_ = cycleType;
	setBodyParameter("CycleType", cycleType);
}

long UpdateFileRequest::getFileId()const
{
	return fileId_;
}

void UpdateFileRequest::setFileId(long fileId)
{
	fileId_ = fileId;
	setBodyParameter("FileId", std::to_string(fileId));
}

int UpdateFileRequest::getAutoRerunIntervalMillis()const
{
	return autoRerunIntervalMillis_;
}

void UpdateFileRequest::setAutoRerunIntervalMillis(int autoRerunIntervalMillis)
{
	autoRerunIntervalMillis_ = autoRerunIntervalMillis;
	setBodyParameter("AutoRerunIntervalMillis", std::to_string(autoRerunIntervalMillis));
}

std::string UpdateFileRequest::getOwner()const
{
	return owner_;
}

void UpdateFileRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setBodyParameter("Owner", owner);
}

std::string UpdateFileRequest::getInputList()const
{
	return inputList_;
}

void UpdateFileRequest::setInputList(const std::string& inputList)
{
	inputList_ = inputList;
	setBodyParameter("InputList", inputList);
}

std::string UpdateFileRequest::getRerunMode()const
{
	return rerunMode_;
}

void UpdateFileRequest::setRerunMode(const std::string& rerunMode)
{
	rerunMode_ = rerunMode;
	setBodyParameter("RerunMode", rerunMode);
}

std::string UpdateFileRequest::getConnectionName()const
{
	return connectionName_;
}

void UpdateFileRequest::setConnectionName(const std::string& connectionName)
{
	connectionName_ = connectionName;
	setBodyParameter("ConnectionName", connectionName);
}

std::string UpdateFileRequest::getParaValue()const
{
	return paraValue_;
}

void UpdateFileRequest::setParaValue(const std::string& paraValue)
{
	paraValue_ = paraValue;
	setBodyParameter("ParaValue", paraValue);
}

std::string UpdateFileRequest::getResourceGroupIdentifier()const
{
	return resourceGroupIdentifier_;
}

void UpdateFileRequest::setResourceGroupIdentifier(const std::string& resourceGroupIdentifier)
{
	resourceGroupIdentifier_ = resourceGroupIdentifier;
	setBodyParameter("ResourceGroupIdentifier", resourceGroupIdentifier);
}

int UpdateFileRequest::getAutoRerunTimes()const
{
	return autoRerunTimes_;
}

void UpdateFileRequest::setAutoRerunTimes(int autoRerunTimes)
{
	autoRerunTimes_ = autoRerunTimes;
	setBodyParameter("AutoRerunTimes", std::to_string(autoRerunTimes));
}

std::string UpdateFileRequest::getCronExpress()const
{
	return cronExpress_;
}

void UpdateFileRequest::setCronExpress(const std::string& cronExpress)
{
	cronExpress_ = cronExpress;
	setBodyParameter("CronExpress", cronExpress);
}

long UpdateFileRequest::getEndEffectDate()const
{
	return endEffectDate_;
}

void UpdateFileRequest::setEndEffectDate(long endEffectDate)
{
	endEffectDate_ = endEffectDate;
	setBodyParameter("EndEffectDate", std::to_string(endEffectDate));
}

std::string UpdateFileRequest::getFileName()const
{
	return fileName_;
}

void UpdateFileRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setBodyParameter("FileName", fileName);
}

bool UpdateFileRequest::getStop()const
{
	return stop_;
}

void UpdateFileRequest::setStop(bool stop)
{
	stop_ = stop;
	setBodyParameter("Stop", stop ? "true" : "false");
}

std::string UpdateFileRequest::getDependentType()const
{
	return dependentType_;
}

void UpdateFileRequest::setDependentType(const std::string& dependentType)
{
	dependentType_ = dependentType;
	setBodyParameter("DependentType", dependentType);
}

std::string UpdateFileRequest::getFileFolderPath()const
{
	return fileFolderPath_;
}

void UpdateFileRequest::setFileFolderPath(const std::string& fileFolderPath)
{
	fileFolderPath_ = fileFolderPath;
	setBodyParameter("FileFolderPath", fileFolderPath);
}

std::string UpdateFileRequest::getFileDescription()const
{
	return fileDescription_;
}

void UpdateFileRequest::setFileDescription(const std::string& fileDescription)
{
	fileDescription_ = fileDescription;
	setBodyParameter("FileDescription", fileDescription);
}

bool UpdateFileRequest::getAutoParsing()const
{
	return autoParsing_;
}

void UpdateFileRequest::setAutoParsing(bool autoParsing)
{
	autoParsing_ = autoParsing;
	setBodyParameter("AutoParsing", autoParsing ? "true" : "false");
}

std::string UpdateFileRequest::getSchedulerType()const
{
	return schedulerType_;
}

void UpdateFileRequest::setSchedulerType(const std::string& schedulerType)
{
	schedulerType_ = schedulerType;
	setBodyParameter("SchedulerType", schedulerType);
}

