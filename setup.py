from setuptools import setup, find_packages

setup(
    name='get-latest-manager-release',
    version='0.1',
    packages=find_packages(),
    entry_points={
        'mkdocs.plugins': [
            'get-latest-manager-release = get_latest_manager_release:GetLatestManagerRelease'
        ]
    }
)