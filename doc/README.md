<<<<<<< HEAD
Litecoin Core
=======
Ulucoin Core
>>>>>>> dev
=============

Setup
---------------------
<<<<<<< HEAD
Litecoin Core is the original Litecoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Litecoin transactions (which is currently more than 7 GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Litecoin Core, visit [litecoin.org](https://litecoin.org).

Running
---------------------
The following are some helpful notes on how to run Litecoin on your native platform.
=======
Ulucoin Core is the original Ulucoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Ulucoin transactions (which is currently more than 7 GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Ulucoin Core, visit [ulucoin.org](https://ulucoin.org).

Running
---------------------
The following are some helpful notes on how to run Ulucoin on your native platform.
>>>>>>> dev

### Unix

Unpack the files into a directory and run:

<<<<<<< HEAD
- `bin/litecoin-qt` (GUI) or
- `bin/litecoind` (headless)

### Windows

Unpack the files into a directory, and then run litecoin-qt.exe.

### OS X

Drag Litecoin-Core to your applications folder, and then run Litecoin-Core.

### Need Help?

* See the documentation at the [Litecoin Wiki](https://litecoin.info/)
for help and more information.
* Ask for help on [#litecoin](http://webchat.freenode.net?channels=litecoin) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=litecoin).
* Ask for help on the [LitecoinTalk](https://litecointalk.io/) forums.

Building
---------------------
The following are developer notes on how to build Litecoin on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.
=======
- `bin/ulucoin-qt` (GUI) or
- `bin/ulucoind` (headless)

### Windows

Unpack the files into a directory, and then run ulucoin-qt.exe.

### OS X

Drag Ulucoin-Core to your applications folder, and then run Ulucoin-Core.

### Need Help?

* See the documentation at the [Ulucoin Wiki](https://ulucoin.info/)
for help and more information.
* Ask for help on [#ulucoin](http://webchat.freenode.net?channels=ulucoin) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=ulucoin).
* Ask for help on the [UlucoinTalk](https://ulucointalk.io/) forums.

Building
---------------------
The following are developer notes on how to build Ulucoin on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.
>>>>>>> dev

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
<<<<<<< HEAD
The Litecoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.
=======
The Ulucoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.
>>>>>>> dev

- [Developer Notes](developer-notes.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
<<<<<<< HEAD
- [Source Code Documentation (External Link)](https://dev.visucore.com/litecoin/doxygen/)
=======
- [Source Code Documentation (External Link)](https://dev.visucore.com/ulucoin/doxygen/)
>>>>>>> dev
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Travis CI](travis-ci.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
<<<<<<< HEAD
* Discuss on the [LitecoinTalk](https://litecointalk.io/) forums.
* Discuss general Litecoin development on #litecoin-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=litecoin-dev).
=======
* Discuss on the [UlucoinTalk](https://ulucointalk.io/) forums.
* Discuss general Ulucoin development on #ulucoin-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=ulucoin-dev).
>>>>>>> dev

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
