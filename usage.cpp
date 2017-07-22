namespace N3928 {

constexpr void example() {
	// You can use this
	static_assert(false);
	// Instead of this
	static_assert(false, "");
}

}

int main() {
	// This won't compile
	N3928::example();
}