#include <iostream>
#include <cstdint>
#include <vector>

class BitBoard{
  // piece bitboards
  uint64_t peiceBitBoard[12]= {};

  // attack bitboards
  uint64_t whiteAttackBitBoard, blackAttackBitBoard,
          whitePawnAttackBitBoard, blackPawnAttackBitBoard,
          whiteKnightAttackBitBoard, blackKnightAttackBitBoard,
          whiteBishopAttackBitBoard, blackBishopAttackBitBoard,
          whiteRookAttackBitBoard, blackRookAttackBitBoard,
          whiteQueenAttackBitBoard, blackQueenAttackBitBoard,
          whiteKingAttackBitBoard, blackKingAttackBitBoard;
          ;
  // fuck enpassant
  uint64_t whiteEnpassant, blackEnpassant;

  // castle rights
  uint8_t castleRights;

};
