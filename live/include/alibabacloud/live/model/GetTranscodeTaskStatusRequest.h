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

#ifndef ALIBABACLOUD_LIVE_MODEL_GETTRANSCODETASKSTATUSREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_GETTRANSCODETASKSTATUSREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT GetTranscodeTaskStatusRequest : public RpcServiceRequest {
public:
	GetTranscodeTaskStatusRequest();
	~GetTranscodeTaskStatusRequest();
	std::string getTranscodingTemplate() const;
	void setTranscodingTemplate(const std::string &transcodingTemplate);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getPushDomain() const;
	void setPushDomain(const std::string &pushDomain);
	std::string getStreamName() const;
	void setStreamName(const std::string &streamName);
	std::string getApp() const;
	void setApp(const std::string &app);

private:
	std::string transcodingTemplate_;
	std::string securityToken_;
	std::string pushDomain_;
	std::string streamName_;
	std::string app_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_GETTRANSCODETASKSTATUSREQUEST_H_
