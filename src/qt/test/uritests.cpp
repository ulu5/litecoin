// Copyright (c) 2009-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "uritests.h"

#include "guiutil.h"
#include "walletmodel.h"

#include <QUrl>

void URITests::uriTests()
{
    SendCoinsRecipient rv;
    QUrl uri;
<<<<<<< HEAD
    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?req-dontexist="));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?dontexist="));
=======
    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?req-dontexist="));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?dontexist="));
>>>>>>> dev
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 0);

<<<<<<< HEAD
    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?label=Wikipedia Example Address"));
=======
    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?label=Wikipedia Example Address"));
>>>>>>> dev
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2"));
    QVERIFY(rv.label == QString("Wikipedia Example Address"));
    QVERIFY(rv.amount == 0);

<<<<<<< HEAD
    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=0.001"));
=======
    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=0.001"));
>>>>>>> dev
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100000);

<<<<<<< HEAD
    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=1.001"));
=======
    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=1.001"));
>>>>>>> dev
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2"));
    QVERIFY(rv.label == QString());
    QVERIFY(rv.amount == 100100000);

<<<<<<< HEAD
    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=100&label=Wikipedia Example"));
=======
    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=100&label=Wikipedia Example"));
>>>>>>> dev
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2"));
    QVERIFY(rv.amount == 10000000000LL);
    QVERIFY(rv.label == QString("Wikipedia Example"));

<<<<<<< HEAD
    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?message=Wikipedia Example Address"));
=======
    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?message=Wikipedia Example Address"));
>>>>>>> dev
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));
    QVERIFY(rv.address == QString("LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2"));
    QVERIFY(rv.label == QString());

<<<<<<< HEAD
    QVERIFY(GUIUtil::parseBitcoinURI("litecoin://LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?message=Wikipedia Example Address", &rv));
    QVERIFY(rv.address == QString("LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2"));
    QVERIFY(rv.label == QString());

    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?req-message=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=1,000&label=Wikipedia Example"));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("litecoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=1,000.0&label=Wikipedia Example"));
=======
    QVERIFY(GUIUtil::parseBitcoinURI("ulucoin://LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?message=Wikipedia Example Address", &rv));
    QVERIFY(rv.address == QString("LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2"));
    QVERIFY(rv.label == QString());

    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?req-message=Wikipedia Example Address"));
    QVERIFY(GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=1,000&label=Wikipedia Example"));
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));

    uri.setUrl(QString("ulucoin:LEr4HnaeFWYhBmGxCfP2po1NPRueIk8kM2?amount=1,000.0&label=Wikipedia Example"));
>>>>>>> dev
    QVERIFY(!GUIUtil::parseBitcoinURI(uri, &rv));
}
