IMAGE = noughts-and-crosses

build:
	docker build -t $(IMAGE) .
.PHONY: build

run: build
	docker run -it --rm $(IMAGE)
.PHONY: run