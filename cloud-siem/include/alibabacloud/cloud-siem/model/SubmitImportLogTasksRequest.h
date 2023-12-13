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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_SUBMITIMPORTLOGTASKSREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_SUBMITIMPORTLOGTASKSREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT SubmitImportLogTasksRequest : public RpcServiceRequest {
public:
	SubmitImportLogTasksRequest();
	~SubmitImportLogTasksRequest();
	std::string getCloudCode() const;
	void setCloudCode(const std::string &cloudCode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLogCodes() const;
	void setLogCodes(const std::string &logCodes);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	int getAutoImported() const;
	void setAutoImported(int autoImported);
	std::string getAccounts() const;
	void setAccounts(const std::string &accounts);

private:
	std::string cloudCode_;
	std::string regionId_;
	std::string logCodes_;
	std::string prodCode_;
	int autoImported_;
	std::string accounts_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_SUBMITIMPORTLOGTASKSREQUEST_H_
