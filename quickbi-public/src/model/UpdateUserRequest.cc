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

#include <alibabacloud/quickbi-public/model/UpdateUserRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest() :
	RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateUser")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateUserRequest::~UpdateUserRequest()
{}

bool UpdateUserRequest::getAdminUser()const
{
	return adminUser_;
}

void UpdateUserRequest::setAdminUser(bool adminUser)
{
	adminUser_ = adminUser;
	setParameter("AdminUser", adminUser ? "true" : "false");
}

int UpdateUserRequest::getAccountType()const
{
	return accountType_;
}

void UpdateUserRequest::setAccountType(int accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", std::to_string(accountType));
}

std::string UpdateUserRequest::getAccessPoint()const
{
	return accessPoint_;
}

void UpdateUserRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setParameter("AccessPoint", accessPoint);
}

int UpdateUserRequest::getUserType()const
{
	return userType_;
}

void UpdateUserRequest::setUserType(int userType)
{
	userType_ = userType;
	setParameter("UserType", std::to_string(userType));
}

std::string UpdateUserRequest::getSignType()const
{
	return signType_;
}

void UpdateUserRequest::setSignType(const std::string& signType)
{
	signType_ = signType;
	setParameter("SignType", signType);
}

std::string UpdateUserRequest::getUserId()const
{
	return userId_;
}

void UpdateUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string UpdateUserRequest::getPhone()const
{
	return phone_;
}

void UpdateUserRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string UpdateUserRequest::getNickName()const
{
	return nickName_;
}

void UpdateUserRequest::setNickName(const std::string& nickName)
{
	nickName_ = nickName;
	setParameter("NickName", nickName);
}

bool UpdateUserRequest::getAuthAdminUser()const
{
	return authAdminUser_;
}

void UpdateUserRequest::setAuthAdminUser(bool authAdminUser)
{
	authAdminUser_ = authAdminUser;
	setParameter("AuthAdminUser", authAdminUser ? "true" : "false");
}

std::string UpdateUserRequest::getEmail()const
{
	return email_;
}

void UpdateUserRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

