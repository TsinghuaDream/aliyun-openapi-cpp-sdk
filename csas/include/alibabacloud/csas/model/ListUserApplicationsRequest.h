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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTUSERAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTUSERAPPLICATIONSREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListUserApplicationsRequest : public RpcServiceRequest {
public:
	ListUserApplicationsRequest();
	~ListUserApplicationsRequest();
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getSaseUserId() const;
	void setSaseUserId(const std::string &saseUserId);
	std::string getName() const;
	void setName(const std::string &name);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	int currentPage_;
	std::string saseUserId_;
	std::string name_;
	int pageSize_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTUSERAPPLICATIONSREQUEST_H_
