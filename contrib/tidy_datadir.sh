#!/bin/bash
# Copyright (c) 2013 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

if [ -d "$1" ]; then
  cd "$1"
else
  echo "Usage: $0 <datadir>" >&2
<<<<<<< HEAD
  echo "Removes obsolete Litecoin database files" >&2
=======
  echo "Removes obsolete Ulucoin database files" >&2
>>>>>>> dev
  exit 1
fi

LEVEL=0
if [ -f wallet.dat -a -f addr.dat -a -f blkindex.dat -a -f blk0001.dat ]; then LEVEL=1; fi
if [ -f wallet.dat -a -f peers.dat -a -f blkindex.dat -a -f blk0001.dat ]; then LEVEL=2; fi
if [ -f wallet.dat -a -f peers.dat -a -f coins/CURRENT -a -f blktree/CURRENT -a -f blocks/blk00000.dat ]; then LEVEL=3; fi
if [ -f wallet.dat -a -f peers.dat -a -f chainstate/CURRENT -a -f blocks/index/CURRENT -a -f blocks/blk00000.dat ]; then LEVEL=4; fi

case $LEVEL in
  0)
<<<<<<< HEAD
    echo "Error: no Litecoin datadir detected."
    exit 1
    ;;
  1)
    echo "Detected old Litecoin datadir (before 0.7)."
=======
    echo "Error: no Ulucoin datadir detected."
    exit 1
    ;;
  1)
    echo "Detected old Ulucoin datadir (before 0.7)."
>>>>>>> dev
    echo "Nothing to do."
    exit 0
    ;;
  2)
<<<<<<< HEAD
    echo "Detected Litecoin 0.7 datadir."
    ;;
  3)
    echo "Detected Litecoin pre-0.8 datadir."
    ;;
  4)
    echo "Detected Litecoin 0.8 datadir."
=======
    echo "Detected Ulucoin 0.7 datadir."
    ;;
  3)
    echo "Detected Ulucoin pre-0.8 datadir."
    ;;
  4)
    echo "Detected Ulucoin 0.8 datadir."
>>>>>>> dev
    ;;
esac

FILES=""
DIRS=""

if [ $LEVEL -ge 3 ]; then FILES=$(echo $FILES blk????.dat blkindex.dat); fi
if [ $LEVEL -ge 2 ]; then FILES=$(echo $FILES addr.dat); fi
if [ $LEVEL -ge 4 ]; then DIRS=$(echo $DIRS coins blktree); fi

for FILE in $FILES; do
  if [ -f $FILE ]; then
    echo "Deleting: $FILE"
    rm -f $FILE
  fi
done

for DIR in $DIRS; do
  if [ -d $DIR ]; then
    echo "Deleting: $DIR/"
    rm -rf $DIR
  fi
done

echo "Done."
