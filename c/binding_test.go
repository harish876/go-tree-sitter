package c_test

import (
	"context"
	"testing"

	sitter "github.com/harish876/go-tree-sitter"
	"github.com/harish876/go-tree-sitter/c"
	"github.com/stretchr/testify/assert"
)

func TestGrammar(t *testing.T) {
	assert := assert.New(t)

	n, err := sitter.ParseCtx(context.Background(), []byte("int a = 2;"), c.GetLanguage())
	assert.NoError(err)
	assert.Equal(
		"(translation_unit (declaration type: (primitive_type) declarator: (init_declarator declarator: (identifier) value: (number_literal))))",
		n.String(),
	)
}
