//
//  main.cpp
//  Project_4
//
//  Created by Ardi Artani on 11/11/20.
//

#include <stdio.h>



/**
    A wrapper to a recursive method that inverts the contents of the list

    @post the contents of the list are inverted such that:
        the item previously at position 1 is at position item_count_,
        the item previously at position 2 is at position item_count_-1 ...
        the item previously at position ⌊item_count/2⌋ is at position
            ⌈item_count_/2⌉
*/
void invert()
{
    
}


/**
    private function to invert, used for safe programming to avoid
    exposing pointers to list in public methods

    @post the contents of the list are inverted such that:
        the item previously at position 1 is at position item_count_,
        the item previously at position 2 is at position item_count_-1 ...
        the item previously at position ⌊item_count/2⌋ is at position
            ⌈item_count_/2⌉
*/
void invertRest(Node<T>* current_first_ptr)
{
    
}
