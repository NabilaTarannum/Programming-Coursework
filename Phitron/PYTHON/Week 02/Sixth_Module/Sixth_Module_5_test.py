import Sixth_Module_5

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"


def test_getresponse():
    ret = Sixth_Module_5.get_response(api_url)
    assert ret.status_code == 200


def test_sum():
    assert 3 == 3
