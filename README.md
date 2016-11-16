RL-Encode-Decode
=================

RL-Encode-Decode is simple realization of Run-length encoding/decoding algorithms. It use C++11

Code usage
==========

 For encode:

    > std::string line = "WWWWWWWWWWWWBWWWWWWWWWWWWBBBWWWWWWWWWWWWWWWWWWWWWWWWBWWWWWWWWWWWWWW";
    > std::string encoded = encode(line);
	
 For decode:
   
    > std::string decoded = decode(encoded);