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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYGLOBALQUESTIONREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYGLOBALQUESTIONREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ModifyGlobalQuestionRequest : public RpcServiceRequest {
public:
	ModifyGlobalQuestionRequest();
	~ModifyGlobalQuestionRequest();
	std::string getGlobalQuestionId() const;
	void setGlobalQuestionId(const std::string &globalQuestionId);
	std::string getGlobalQuestionName() const;
	void setGlobalQuestionName(const std::string &globalQuestionName);
	std::string getQuestions() const;
	void setQuestions(const std::string &questions);
	std::string getAnswers() const;
	void setAnswers(const std::string &answers);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getGlobalQuestionType() const;
	void setGlobalQuestionType(const std::string &globalQuestionType);

private:
	std::string globalQuestionId_;
	std::string globalQuestionName_;
	std::string questions_;
	std::string answers_;
	std::string scriptId_;
	std::string instanceId_;
	std::string globalQuestionType_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_MODIFYGLOBALQUESTIONREQUEST_H_
