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

#ifndef ALIBABACLOUD_ECD_MODEL_LISTCDSFILESREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_LISTCDSFILESREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ListCdsFilesRequest : public RpcServiceRequest {
public:
	ListCdsFilesRequest();
	~ListCdsFilesRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	std::string getRootId() const;
	void setRootId(const std::string &rootId);
	std::string getCdsId() const;
	void setCdsId(const std::string &cdsId);
	std::string getParentFileId() const;
	void setParentFileId(const std::string &parentFileId);
	std::string getFileIds() const;
	void setFileIds(const std::string &fileIds);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string regionId_;
	std::string nextToken_;
	std::string endUserId_;
	std::string rootId_;
	std::string cdsId_;
	std::string parentFileId_;
	std::string fileIds_;
	int maxResults_;
	std::string orderType_;
	std::string status_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_LISTCDSFILESREQUEST_H_
