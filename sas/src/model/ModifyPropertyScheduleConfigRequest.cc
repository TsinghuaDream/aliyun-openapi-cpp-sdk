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

#include <alibabacloud/sas/model/ModifyPropertyScheduleConfigRequest.h>

using AlibabaCloud::Sas::Model::ModifyPropertyScheduleConfigRequest;

ModifyPropertyScheduleConfigRequest::ModifyPropertyScheduleConfigRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyPropertyScheduleConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyPropertyScheduleConfigRequest::~ModifyPropertyScheduleConfigRequest()
{}

std::string ModifyPropertyScheduleConfigRequest::getType()const
{
	return type_;
}

void ModifyPropertyScheduleConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string ModifyPropertyScheduleConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyPropertyScheduleConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyPropertyScheduleConfigRequest::getScheduleTime()const
{
	return scheduleTime_;
}

void ModifyPropertyScheduleConfigRequest::setScheduleTime(const std::string& scheduleTime)
{
	scheduleTime_ = scheduleTime;
	setParameter("ScheduleTime", scheduleTime);
}

