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

#include <alibabacloud/ccc/model/ReleaseCallResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ReleaseCallResult::ReleaseCallResult() :
	ServiceResult()
{}

ReleaseCallResult::ReleaseCallResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ReleaseCallResult::~ReleaseCallResult()
{}

void ReleaseCallResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ContextId"].isNull())
		data_.contextId = std::stol(dataNode["ContextId"].asString());
	auto callContextNode = dataNode["CallContext"];
	if(!callContextNode["JobId"].isNull())
		data_.callContext.jobId = callContextNode["JobId"].asString();
	if(!callContextNode["InstanceId"].isNull())
		data_.callContext.instanceId = callContextNode["InstanceId"].asString();
	auto allChannelContextsNode = callContextNode["ChannelContexts"]["ChannelContext"];
	for (auto callContextNodeChannelContextsChannelContext : allChannelContextsNode)
	{
		Data::CallContext::ChannelContext channelContextObject;
		if(!callContextNodeChannelContextsChannelContext["ReleaseInitiator"].isNull())
			channelContextObject.releaseInitiator = callContextNodeChannelContextsChannelContext["ReleaseInitiator"].asString();
		if(!callContextNodeChannelContextsChannelContext["ChannelState"].isNull())
			channelContextObject.channelState = callContextNodeChannelContextsChannelContext["ChannelState"].asString();
		if(!callContextNodeChannelContextsChannelContext["Destination"].isNull())
			channelContextObject.destination = callContextNodeChannelContextsChannelContext["Destination"].asString();
		if(!callContextNodeChannelContextsChannelContext["UserId"].isNull())
			channelContextObject.userId = callContextNodeChannelContextsChannelContext["UserId"].asString();
		if(!callContextNodeChannelContextsChannelContext["Timestamp"].isNull())
			channelContextObject.timestamp = std::stol(callContextNodeChannelContextsChannelContext["Timestamp"].asString());
		if(!callContextNodeChannelContextsChannelContext["AssociatedData"].isNull())
			channelContextObject.associatedData = callContextNodeChannelContextsChannelContext["AssociatedData"].asString();
		if(!callContextNodeChannelContextsChannelContext["ReleaseReason"].isNull())
			channelContextObject.releaseReason = callContextNodeChannelContextsChannelContext["ReleaseReason"].asString();
		if(!callContextNodeChannelContextsChannelContext["CallType"].isNull())
			channelContextObject.callType = callContextNodeChannelContextsChannelContext["CallType"].asString();
		if(!callContextNodeChannelContextsChannelContext["JobId"].isNull())
			channelContextObject.jobId = callContextNodeChannelContextsChannelContext["JobId"].asString();
		if(!callContextNodeChannelContextsChannelContext["ChannelId"].isNull())
			channelContextObject.channelId = callContextNodeChannelContextsChannelContext["ChannelId"].asString();
		if(!callContextNodeChannelContextsChannelContext["Originator"].isNull())
			channelContextObject.originator = callContextNodeChannelContextsChannelContext["Originator"].asString();
		if(!callContextNodeChannelContextsChannelContext["UserExtension"].isNull())
			channelContextObject.userExtension = callContextNodeChannelContextsChannelContext["UserExtension"].asString();
		data_.callContext.channelContexts.push_back(channelContextObject);
	}
	auto userContextNode = dataNode["UserContext"];
	if(!userContextNode["Extension"].isNull())
		data_.userContext.extension = userContextNode["Extension"].asString();
	if(!userContextNode["WorkMode"].isNull())
		data_.userContext.workMode = userContextNode["WorkMode"].asString();
	if(!userContextNode["DeviceId"].isNull())
		data_.userContext.deviceId = userContextNode["DeviceId"].asString();
	if(!userContextNode["JobId"].isNull())
		data_.userContext.jobId = userContextNode["JobId"].asString();
	if(!userContextNode["UserId"].isNull())
		data_.userContext.userId = userContextNode["UserId"].asString();
	if(!userContextNode["BreakCode"].isNull())
		data_.userContext.breakCode = userContextNode["BreakCode"].asString();
	if(!userContextNode["InstanceId"].isNull())
		data_.userContext.instanceId = userContextNode["InstanceId"].asString();
	if(!userContextNode["OutboundScenario"].isNull())
		data_.userContext.outboundScenario = userContextNode["OutboundScenario"].asString() == "true";
	if(!userContextNode["UserState"].isNull())
		data_.userContext.userState = userContextNode["UserState"].asString();
		auto allSignedSkillGroupIdList = userContextNode["SignedSkillGroupIdList"]["SkillGroupId"];
		for (auto value : allSignedSkillGroupIdList)
			data_.userContext.signedSkillGroupIdList.push_back(value.asString());
	auto allParams = value["Params"]["Param"];
	for (const auto &item : allParams)
		params_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ReleaseCallResult::getMessage()const
{
	return message_;
}

int ReleaseCallResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> ReleaseCallResult::getParams()const
{
	return params_;
}

ReleaseCallResult::Data ReleaseCallResult::getData()const
{
	return data_;
}

std::string ReleaseCallResult::getCode()const
{
	return code_;
}

