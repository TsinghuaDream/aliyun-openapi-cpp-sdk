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

#include <alibabacloud/rds/model/ModifyDBInstanceTDERequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceTDERequest;

ModifyDBInstanceTDERequest::ModifyDBInstanceTDERequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceTDE")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceTDERequest::~ModifyDBInstanceTDERequest()
{}

long ModifyDBInstanceTDERequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceTDERequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceTDERequest::getCertificate()const
{
	return certificate_;
}

void ModifyDBInstanceTDERequest::setCertificate(const std::string& certificate)
{
	certificate_ = certificate;
	setParameter("Certificate", certificate);
}

std::string ModifyDBInstanceTDERequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceTDERequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceTDERequest::getPrivateKey()const
{
	return privateKey_;
}

void ModifyDBInstanceTDERequest::setPrivateKey(const std::string& privateKey)
{
	privateKey_ = privateKey;
	setParameter("PrivateKey", privateKey);
}

std::string ModifyDBInstanceTDERequest::getPassWord()const
{
	return passWord_;
}

void ModifyDBInstanceTDERequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string ModifyDBInstanceTDERequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceTDERequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBInstanceTDERequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceTDERequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceTDERequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceTDERequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceTDERequest::getEncryptionKey()const
{
	return encryptionKey_;
}

void ModifyDBInstanceTDERequest::setEncryptionKey(const std::string& encryptionKey)
{
	encryptionKey_ = encryptionKey;
	setParameter("EncryptionKey", encryptionKey);
}

long ModifyDBInstanceTDERequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceTDERequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceTDERequest::getDBName()const
{
	return dBName_;
}

void ModifyDBInstanceTDERequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

std::string ModifyDBInstanceTDERequest::getRoleArn()const
{
	return roleArn_;
}

void ModifyDBInstanceTDERequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setParameter("RoleArn", roleArn);
}

std::string ModifyDBInstanceTDERequest::getTDEStatus()const
{
	return tDEStatus_;
}

void ModifyDBInstanceTDERequest::setTDEStatus(const std::string& tDEStatus)
{
	tDEStatus_ = tDEStatus;
	setParameter("TDEStatus", tDEStatus);
}

