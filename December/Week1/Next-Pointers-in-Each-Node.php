<?php

class Node {
    function __construct($val = 0) {
        $this->val = $val;
        $this->left = null;
        $this->right = null;
        $this->next = null;
    }
}

class Solution {
    /**
     * @param Node $root
     * @return Node
     */
    public function connect($root) {

        if (!$root) return $root;
        
        $current = $root;
        
        while ($current) {
            
            $temp = null;
            
            while ($current) {

                if ($current->left) {

                    if (!$temp) $temp = $current->left;
    
                    else $prev->next = $current->left;
    
                    $prev = $current->left;
                }
    
                if ($current->right) {
    
                    if (!$temp) $temp = $current->right;
    
                    else $prev->next = $current->right;
    
                    $prev = $current->right;
                }
    
                $current = $current->next;
            }

            $current = $temp;
        }
        
        return $root;
    }
}