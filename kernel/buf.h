struct buf {
  int valid;   // has data been read from disk?
  int disk;    // does disk "own" buf?
  uint dev;
  uint blockno;
  struct sleeplock lock;
  uint refcnt;
//  struct buf *prev; // LRU cache list - lab8-2
  struct buf *next;     // hash list
  uchar data[BSIZE];
  uint timestamp;   // the buf last using time - lab8-2
};

