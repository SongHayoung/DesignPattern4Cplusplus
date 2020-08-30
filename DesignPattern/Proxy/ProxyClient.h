//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_PROXYCLIENT_H
#define DESIGNPATTERN_PROXYCLIENT_H

#include "File.h"
#include "ProtectedFile.h"
#include "VirtualFile.h"

namespace ProxyPattern
{
    void ProxyPattern();
    void protectedProxy();
    void virtualProxy();
}

void ProxyPattern::ProxyPattern()
{
    virtualProxy();
    protectedProxy();
}

void ProxyPattern::protectedProxy()
{
    File* adminFile = new File(AccessAuthority::ADMIN, "This is admin file.");
    File* guestFile = new File(AccessAuthority::GUEST, "This is guest file.");

    ProtectedFile* guestFileProxy = new ProtectedFile(guestFile);
    ProtectedFile* adminFileProxy = new ProtectedFile(adminFile);

    std::cout<<guestFileProxy->getData(AccessAuthority::ADMIN)<<std::endl;
    std::cout<<guestFileProxy->getData(AccessAuthority::GUEST)<<std::endl;
    std::cout<<adminFileProxy->getData(AccessAuthority::ADMIN)<<std::endl;
    std::cout<<adminFileProxy->getData(AccessAuthority::GUEST)<<std::endl;
}

void ProxyPattern::virtualProxy()
{
    VirtualFile* virtualFile = new VirtualFile("foo path");
    std::cout<<virtualFile->getData()<<std::endl;
    std::cout<<virtualFile->getData()<<std::endl;
    std::cout<<virtualFile->getData()<<std::endl;
    std::cout<<virtualFile->getData()<<std::endl;
    std::cout<<virtualFile->getData()<<std::endl;
    std::cout<<virtualFile->getData()<<std::endl;
}

#endif //DESIGNPATTERN_PROXYCLIENT_H
