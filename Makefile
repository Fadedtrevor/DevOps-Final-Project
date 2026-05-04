IMAGE_NAME=cpp-calc-app

build:
	docker build -t $(IMAGE_NAME) .

run:
	docker run --rm $(IMAGE_NAME)

clean:
	docker rmi $(IMAGE_NAME)
delete:
	docker rmi -f $(IMAGE_NAME)
