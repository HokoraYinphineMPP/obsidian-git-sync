from mkdocs.plugins import BasePlugin
import requests

class GetLatestManagerRelease(BasePlugin):
    def on_pre_build(self, config):
        repo = 'revanced/revanced-manager'

        json = requests.get(f'https://api.github.com/repos/{repo}/releases/latest').json()
        manager_apk = next(asset['name'] for asset in json['assets'] if asset['name'].startswith('revanced-manager') and asset['name'].endswith('.apk'))

        self.latest_release_link = f'https://github.com/{repo}/releases/latest/download/{manager_apk}'

    def on_page_markdown(self, markdown, page, config, files):
        return markdown.replace('{{ latest_release_link }}', self.latest_release_link)