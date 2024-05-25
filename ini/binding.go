package tree_sitter_ini

// #cgo CFLAGS: -std=c11 -fPIC
// #include "parser.h"
// TSLanguage *tree_sitter_ini();
import "C"

import (
	"unsafe"

	sitter "github.com/harish876/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	// Version Pointer
	ptr := unsafe.Pointer(C.tree_sitter_ini())
	return sitter.NewLanguage(ptr)
}
