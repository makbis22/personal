# \D-Bugging

딥러닝(roboflow 모델)을 통해 사육 개체를 인식, 각 개체의 성장도와 활동량을 측정하고 해당 데이터를 기반으로 질병 및 수확량을 예측하는 솔루션 개발이 목적.

ESP32CAM은 영상을 촬영하고 node.js로 구축된 별도의 웹서버로 영상을 제공. 웹서버는 스크립트를 통해 딥러닝 모델을 적용, 영상 처리 과정에서 필요 데이터를 계측, 이후 DB 서버로 데이터를 전송하고 C# 응용 프로그램으로 영상을 제공.

NodeMCU는 각 센서들을 통해 사육 환경 데이터를 측정, DB 서버에 전송함. 또한 별도의 내장 알고리즘을 통해 사용자가 설정한 사전값에 따라 습도와 온도, 조도를 자동으로 조정하며 C# 응용 프로그램과의 무선 통신을 통해 각 모듈을 제어함.

C# 응용프로그램은 GUI를 통해 사육장의 현재 환경값과 영상처리 전의 영상, 영상처리 후의 영상을 실시간으로 송출하며 최근 환경 데이터의 변화를 그래프로 시각화하여 제공함. 사용자는 데이터 분석을 위해 원본 데이터를 csv 형식으로 모두 내려받아 확인할 수 있음. 

사육장 환경 제어는 기본적으로 자동으로 이루어지나 이용자가 C# 응용 프로그램 상에서 수동 모드를 활성화하면 각 모듈을 직접 제어하는 것이 가능하고 자동 제어의 설정값 또한 이용자가 응용 프로그램을 통해 설정할 수 있음.


# \javaMiniProject

사용자의 신체 정보를 입력받고 BMI 수치를 어플리케이션 내부에서 계산, 입력받은 신체 정보와 계산된 BMI 수치를 XAMPP 호스팅 툴을 이용해 아파치 웹서버에 구축된 MySQL에 PHP 스크립트를 통해 저장. 이후 어플리케이션과 실시간으로 연동.

# \practice
