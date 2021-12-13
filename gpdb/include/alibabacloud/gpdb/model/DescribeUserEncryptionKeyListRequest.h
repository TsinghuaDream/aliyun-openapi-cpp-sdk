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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEUSERENCRYPTIONKEYLISTREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEUSERENCRYPTIONKEYLISTREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT DescribeUserEncryptionKeyListRequest : public RpcServiceRequest {
public:
	DescribeUserEncryptionKeyListRequest();
	~DescribeUserEncryptionKeyListRequest();
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);

private:
	std::string pageNumber_;
	std::string regionId_;
	std::string pageSize_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEUSERENCRYPTIONKEYLISTREQUEST_H_
